import QtQuick 2.12
import QtQuick.Controls 2.15

Rectangle {
    id: customButton
    property bool active: false
    property color defaultColor: "lightblue"
    property color activeColor: "#4B6B82"
    property color defaultTextColor: "#1A3A4A"
    property color activeTextColor: "white"
    property alias buttonText: btnText.text
    height: 35
    width: 90
    color: active ? activeColor : defaultColor
    radius: 8
    border.color: "#1A3A4A"

    Text{
        id: btnText
        text: ""
        anchors.centerIn: parent
        color: customButton.active ? activeTextColor : defaultTextColor
        font.bold: true
        font.family: "Times New Roman"
        font.pointSize: 15
    }

    states: [
        State{
            when: customButton.active
            PropertyChanges {
                target: customButton
                color: activeColor
            }
            PropertyChanges {
                target: btnText
                color: activeTextColor

            }
        }
    ]

    transitions: Transition {
        ColorAnimation {
            target: customButton
            property: "color"
            duration: 500
            easing.type: Easing.OutQuad
        }
        ColorAnimation{
            target: btnText
            property: "color"
            duration: 500
            easing.type: Easing.OutQuad
        }
    }

    MouseArea{
        anchors.fill: parent
        onClicked: {
            customButton.clicked()
        }
    }

    signal clicked
}
