open ReactNative;

let styles =
  Style.(
    StyleSheet.create({
      "container":
        style(~flex=1., ~justifyContent=`center, ~alignItems=`center, ()),
      "text": style(~fontSize=22., ()),
    })
  );

[@react.component]
let make = () => {
  <View style=styles##container>
    <Text style=styles##text>
      {React.string("Hello from ReasonML!" ++ {j| 🎉|j})}
    </Text>
  </View>;
};
