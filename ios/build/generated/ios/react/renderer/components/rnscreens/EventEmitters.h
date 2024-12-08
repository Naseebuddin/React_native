
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateEventEmitterH.js
 */
#pragma once

#include <react/renderer/components/view/ViewEventEmitter.h>


namespace facebook::react {
class RNSFullWindowOverlayEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  
  
};
class RNSModalScreenEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnAppear {
      
    };

  struct OnDisappear {
      
    };

  struct OnDismissed {
      int dismissCount;
    };

  struct OnNativeDismissCancelled {
      int dismissCount;
    };

  struct OnWillAppear {
      
    };

  struct OnWillDisappear {
      
    };

  struct OnHeaderHeightChange {
      double headerHeight;
    };

  struct OnTransitionProgress {
      double progress;
    int closing;
    int goingForward;
    };

  struct OnGestureCancel {
      
    };

  struct OnHeaderBackButtonClicked {
      
    };
  void onAppear(OnAppear value) const;

  void onDisappear(OnDisappear value) const;

  void onDismissed(OnDismissed value) const;

  void onNativeDismissCancelled(OnNativeDismissCancelled value) const;

  void onWillAppear(OnWillAppear value) const;

  void onWillDisappear(OnWillDisappear value) const;

  void onHeaderHeightChange(OnHeaderHeightChange value) const;

  void onTransitionProgress(OnTransitionProgress value) const;

  void onGestureCancel(OnGestureCancel value) const;

  void onHeaderBackButtonClicked(OnHeaderBackButtonClicked value) const;
};
class RNSScreenContainerEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  
  
};
class RNSScreenEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnAppear {
      
    };

  struct OnDisappear {
      
    };

  struct OnDismissed {
      int dismissCount;
    };

  struct OnNativeDismissCancelled {
      int dismissCount;
    };

  struct OnWillAppear {
      
    };

  struct OnWillDisappear {
      
    };

  struct OnHeaderHeightChange {
      double headerHeight;
    };

  struct OnTransitionProgress {
      double progress;
    int closing;
    int goingForward;
    };

  struct OnGestureCancel {
      
    };

  struct OnHeaderBackButtonClicked {
      
    };
  void onAppear(OnAppear value) const;

  void onDisappear(OnDisappear value) const;

  void onDismissed(OnDismissed value) const;

  void onNativeDismissCancelled(OnNativeDismissCancelled value) const;

  void onWillAppear(OnWillAppear value) const;

  void onWillDisappear(OnWillDisappear value) const;

  void onHeaderHeightChange(OnHeaderHeightChange value) const;

  void onTransitionProgress(OnTransitionProgress value) const;

  void onGestureCancel(OnGestureCancel value) const;

  void onHeaderBackButtonClicked(OnHeaderBackButtonClicked value) const;
};
class RNSScreenNavigationContainerEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  
  
};
class RNSScreenStackHeaderConfigEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  
  
};
class RNSScreenStackHeaderSubviewEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  
  
};
class RNSScreenStackEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnFinishTransitioning {
      
    };
  void onFinishTransitioning(OnFinishTransitioning value) const;
};
class RNSSearchBarEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnFocus {
      
    };

  struct OnBlur {
      
    };

  struct OnSearchButtonPress {
      std::string text;
    };

  struct OnCancelButtonPress {
      
    };

  struct OnChangeText {
      std::string text;
    };

  struct OnClose {
      
    };

  struct OnOpen {
      
    };
  void onFocus(OnFocus value) const;

  void onBlur(OnBlur value) const;

  void onSearchButtonPress(OnSearchButtonPress value) const;

  void onCancelButtonPress(OnCancelButtonPress value) const;

  void onChangeText(OnChangeText value) const;

  void onClose(OnClose value) const;

  void onOpen(OnOpen value) const;
};
} // namespace facebook::react
