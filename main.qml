import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.15
import datagenerator 1.0
import dataprocessor 1.0
import QtCharts 6.2
import Qt.labs.qmlmodels 1.0

Window {
    id: first
    width: 540
    height: 360
    visible: true
    title: qsTr("Calculating average")

    Rectangle {
        anchors.fill: parent
        Image {
            source: getSource()
            anchors.fill: parent
            fillMode: Image.PreserveAspectCrop

            function getSource()
            {
                if(chart.visible===false && table.visible===false)
                {
                    if(!datagenerator.active)
                    {
                        return qsTr("/../background2.jpg");
                    }
                    else
                    {
                        if(dataprocessor.listLength<10)
                        {
                            return qsTr("background.jpg");
                        }
                        else
                        {
                            return qsTr("background3.jpg");
                        }
                    }
                }
                else{
                    return qsTr("");
                }
            }
        }
    }

    DataGenerator {
        id: datagenerator
        interval: 2000
        processor: dataprocessor
        onGenerate: {
            datagenerator.generateData();
        }
    }

    DataProcessor {
        id: dataprocessor
        onResultListChanged: {
            chart.updateChart();
            tableview.updateTable();
        }
    }

    Text {
        id: start
        height: 20

        function getText() {
            if (datagenerator.active) {
                if(dataprocessor.listLength<10)
                    return qsTr("Generating data...");
                else{
                    return qsTr("Processing the numbers bellow..");
                }
            }
            else{
                return qsTr("You want to start generating data?");
            }
        }

        visible: chart.visible===false && table.visible===false
        text: getText()
        x: 60
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: 0
        font {
            bold: true
            pointSize: 28
            family: "Times New Roman"
        }
        color: "#1A3A4A"
        opacity: 0

        SequentialAnimation {
            id: animationSequence
            running: true
            ParallelAnimation {
                NumberAnimation {
                    target: start
                    property: "opacity"
                    to: 1
                    duration: 1000
                    easing.type: Easing.InOutQuad
                }
                NumberAnimation {
                    target: start
                    property: "anchors.verticalCenterOffset"
                    from: -200
                    to: -110
                    duration: 2000
                    easing.type: Easing.Linear
                }
                PauseAnimation {
                    duration: 1000
                }
            }
        }
    }

    CustomButton{
        height: 35
        width: 90
        anchors.left: parent.left
        anchors.leftMargin: 60
        id: button
        anchors.top: parent.verticalCenter
        anchors.topMargin: -80
        opacity: 0
        buttonText: datagenerator.active ? qsTr("Stop") : qsTr("Click here")
        active: datagenerator.active
        visible: chart.visible===false && table.visible===false

        SequentialAnimation{
            running: true
            PauseAnimation{
                duration: 1000
            }
            NumberAnimation{
                target: button
                property: "opacity"
                to: 1
                duration: 2000
                easing.type: Easing.OutQuad
            }
        }
        onClicked: {
            if (datagenerator.active === false){
                datagenerator.start();
            } else {
                dataprocessor.listLength = 0;
                dataprocessor.emptyList();
                datagenerator.stop();
            }
        }
    }

    Column {
        id: col
        anchors {
            top: button.bottom
            topMargin: dataprocessor.listLength<10 ? 40 : 80
            horizontalCenter: parent.horizontalCenter
        }
        spacing: 20

        Text
        {
            visible: datagenerator.active && chart.visible===false && table.visible===false
            text: dataprocessor.listLength > 9 ? qsTr("Average: " + dataprocessor.processedData.toFixed(1)) : qsTr("Waiting for enough data\n to calculate the average of 10 numbers...")
            font.pointSize: dataprocessor.listLength > 9 ? 30 : 24
            font.bold: true
            font.family: "Times New Roman"
            color: dataprocessor.listLength > 9 && datagenerator.active ? "#2C5368" : "#1A3A4A"
            font.italic: true
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.horizontalCenterOffset: dataprocessor.listLength > 9 ? -125: -10
        }

        Text
        {
            text: datagenerator.data
            font.pointSize: 50
            font.bold: true
            visible: datagenerator.active && dataprocessor.listLength<10 && chart.visible===false && table.visible===false
            color: "#4B6D83"
            font.italic: true
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.horizontalCenterOffset: 100
        }
    }

    ListView {
        id: listView
        width: 500
        height: 50
        orientation: ListView.Horizontal
        model: 10
        spacing: 10
        anchors.horizontalCenter: parent.horizontalCenter
        anchors {
            top: button.bottom
            topMargin: 115
            horizontalCenter: parent.horizontalCenter
        }
        visible: dataprocessor.listLength > 9 && datagenerator.active && chart.visible===false && table.visible===false

        delegate: Rectangle {
            width: 40
            height: 40
            color: "lightblue"
            Text {
                id: data
                anchors.centerIn: parent
                text: dataprocessor.listLength > 9 ? dataprocessor.list[dataprocessor.listLength-10+index] : "0"
                color: "white"
                font.pointSize: 18
            }
        }
    }

    CustomButton{
        z: 1
        visible: dataprocessor.listLength > 9 && datagenerator.active && table.visible===false
        height: 30
        width: 80
        id: button2
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 10
        anchors.right: parent.right
        anchors.rightMargin: 30
        active: chart.visible
        buttonText: chart.visible ? qsTr("Go back") : qsTr("Chart")
        onClicked: {
            if(chart.visible===false)
            {
                chart.printLineSeries();
                chart.visible=true
            }
            else
                chart.visible=false
        }
    }
    CustomButton{
        z: 1
        visible: dataprocessor.listLength > 9 && datagenerator.active && chart.visible===false
        height: 30
        width: 80
        id: button3
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 10
        anchors.right: parent.right
        anchors.rightMargin: table.visible ? 30 : 120
        active: table.visible
        buttonText: table.visible ? qsTr("Go back") : qsTr("Table")

        transitions: Transition {
            NumberAnimation {
                target: button3
                property: "anchors.rightMargin"
                duration: 500
                easing.type: Easing.OutQuad
            }
        }

        onClicked: {
            if(table.visible===false)
            {
                table.visible=true
            }
            else
                table.visible=false
        }
    }

    ChartView {
        id: chart
        width: parent.width-40
        height: parent.height-58
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 43
        anchors.top: parent.top
        anchors.topMargin: 15
        anchors.left: parent.left
        anchors.leftMargin: 20
        antialiasing: true
        visible: false
        legend.visible: false
        legend.font.pointSize: 10
        legend.alignment: Qt.AlignBottom

        ValueAxis {
            id: axisX
            min: 1
            max: 5
            tickCount: 5
            color: "#4B6D83"
            labelFormat: "%d"
        }

        ValueAxis {
            id: axisY
            min: 0
            max: 90
            tickCount: 10
            color: "#4B6D83"
            labelFormat: "%d"
        }

        LineSeries {
            name: "Average"
            id: lineSeries
            axisX: axisX
            axisY: axisY
            color: "#4B6D83"
            width: 3
            pointsVisible: true
            pointLabelsColor: "red"
        }

        function updateChart()
        {
            let num=dataprocessor.resultListLength();
            lineSeries.clear();
            if(num<=5)
            {
                for(let i=0;i<5;++i)
                {
                    if(dataprocessor.resultList[i])
                    {
                        lineSeries.append(i+1, dataprocessor.resultList[i]);
                    }
                    else
                    {
                        lineSeries.append(i+1,0);
                    }
                }
            }
            else{
                for(let j = 0; j < 5; ++j)
                {
                    if(dataprocessor.resultList[num-5+j])
                    {
                        lineSeries.append(j+1, dataprocessor.resultList[num-5+j]);
                    }
                }
            }
        }

        function printLineSeries() {
            console.log("Printing LineSeries:");
            for (let i = 0; i < lineSeries.count; ++i) {
                console.log("Point at index", i+1, ":", lineSeries.at(i).x, lineSeries.at(i).y);
            }
        }
    }

    Rectangle {
        width: parent.width - 50
        height: parent.height - 60
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.topMargin: 10
        anchors.bottomMargin: 50
        anchors.leftMargin: 25
        anchors.rightMargin: 25
        clip: true
        id: table
        visible: false
        color: "#4B6D83"

        TableModel {
            id: tablemodel
            TableModelColumn { display: "value" }
            TableModelColumn { display: "time" }
        }
        Column {
            anchors.fill: parent
            HorizontalHeaderView {
                id: horizontalHeader
                syncView: tableview
                height: 40
                anchors.left: verticalHeader.right
                x: verticalHeader.width
                delegate: Rectangle{
                    implicitWidth: 100
                    implicitHeight: 40
                    color: "#4B6D83"
                    border.color: "black"
                    Text {
                        anchors.centerIn: parent
                        text: index===0 ? "Average" : "Time"
                        font.pixelSize: 20
                        color: "white"
                        font.italic: true
                    }
                }
            }

            Flickable {
                id: flickable
                width: parent.width
                height: parent.height - horizontalHeader.height
                contentWidth: tableview.width
                contentHeight: tableview.contentHeight

                VerticalHeaderView {
                    id: verticalHeader
                    syncView: tableview

                    delegate: Rectangle {
                        implicitWidth: 50
                        implicitHeight: horizontalHeader.height - 2
                        color: "#4B6D83"
                        border.color: "black"

                        Text {
                            anchors.centerIn: parent
                            text: (index + 1).toString()
                            color: "white"
                            font.italic: true
                        }
                    }
                }

                TableView {
                    id: tableview
                    width: flickable.width - verticalHeader.width
                    height: contentHeight
                    anchors.left: verticalHeader.right
                    columnSpacing: 1
                    rowSpacing: 1

                    model: tablemodel

                    delegate: Rectangle {
                        implicitHeight: horizontalHeader.height - 4
                        implicitWidth: (flickable.width - verticalHeader.width - 2) / 2
                        border.width: 1

                        Text {
                            text: display
                            anchors.centerIn: parent
                        }
                    }

                    function updateTable() {
                        model.appendRow(
                            {
                                value: dataprocessor.processedData.toFixed(2),
                                time: dataprocessor.currentTime
                            }
                        )
                        flickable.contentY = flickable.contentHeight - flickable.height
                    }
                }

                ScrollBar.vertical: ScrollBar {
                    policy: ScrollBar.AlwaysOn
                }
            }
        }
    }


    MouseArea {
        anchors.fill: button
        onClicked: {
            if (datagenerator.active === false){
                datagenerator.start();
            }
            else{
                dataprocessor.listLength=0
                dataprocessor.emptyList();
                datagenerator.stop();
            }
        }
    }
}
