import { ButtonContainer, TextContainer, WrapperContainer } from "@components/atoms";
import { AuthHeader, CustomTextInput, RememberMe } from "@components/molecules";
import fontFamily from "@constants/fontFamily";
import imagePath from "@constants/imagePath";
import { useCustomPost } from "@hooks/useMutationQuery";
import type { AuthStackParamList } from "@navigations/AuthStack";
import type { NavigationProp } from "@react-navigation/native";
import { useNavigation } from "@react-navigation/native";
import { useDispatch } from "@redux/hooks";
import { saveUserData } from "@redux/reducers/auth";
import { moderateScale, verticalScale } from "@utils/scaling";
import validate from "@utils/validations";
import React, { useState } from "react";
import { Alert, Keyboard, Text, TouchableWithoutFeedback, View } from "react-native";
import { createStyleSheet, useStyles } from "react-native-unistyles";
import LoginResponse, { LoginRequestData } from "./types";

const stylesheet = createStyleSheet(() => ({
  container: {
    flex: 1,
    marginHorizontal: moderateScale(16),
    justifyContent: "space-between",
  },
  bottomView: {
    flexDirection: "row",
    alignItems: "center",
    alignSelf: "center",
  },
}));

const alertFunction = (title: string, message: string) => {
  Alert.alert(
    title,
    message,
    [
      {
        text: "Cancel",
        onPress: () => {},
        style: "cancel",
      },
      { text: "OK", onPress: () => {} },
    ],
    { cancelable: false },
  );
};

const Login = (): React.JSX.Element => {
  const navigation = useNavigation<NavigationProp<AuthStackParamList>>();
  const [username, setUsername] = useState<string>("kminchelle");
  const [password, setPassword] = useState<string>("0lelplR");

  const { styles } = useStyles(stylesheet);

  return (
    <WrapperContainer>
      <Text>
        Logins
      </Text>
     
    </WrapperContainer>
  );
};

export default Login;
