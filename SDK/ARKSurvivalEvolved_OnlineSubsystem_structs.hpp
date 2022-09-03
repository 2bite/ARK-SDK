#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basic.hpp"
#include "ARKSurvivalEvolved_CoreUObject_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t
{
	EInAppPurchaseState__Success   = 0,
	EInAppPurchaseState__Failed    = 1,
	EInAppPurchaseState__Cancelled = 2,
	EInAppPurchaseState__Invalid   = 3,
	EInAppPurchaseState__NotAllowed = 4,
	EInAppPurchaseState__Unknown   = 5,
	EInAppPurchaseState__EInAppPurchaseState_MAX = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystem.NamedInterfaces.NamedInterface
// 0x0010
struct FNamedInterface
{
	struct FName                                       InterfaceName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     InterfaceObject;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OnlineSubsystem.NamedInterfaces.NamedInterfaceDef
// 0x0018
struct FNamedInterfaceDef
{
	struct FName                                       InterfaceName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      InterfaceClassName;                                       // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// 0x0040
struct FInAppPurchaseProductInfo
{
	class FString                                      Identifier;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      DisplayName;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      DisplayDescription;                                       // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      DisplayPrice;                                             // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
