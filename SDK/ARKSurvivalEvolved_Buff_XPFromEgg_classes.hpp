#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_XPFromEgg_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_XPFromEgg.Buff_XPFromEgg_C
// 0x0100 (0x0A50 - 0x0950)
class ABuff_XPFromEgg_C : public APrimalBuff
{
public:
	float                                              SmallDinoXPEarningMultiplier;                             // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0954(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_Event_ForInstigator;                               // 0x0958(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x0960(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0968(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0969(0x0003) MISSED OFFSET
	int                                                K2Node_Event_BuffIndex;                                   // 0x096C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterHUD*                                 K2Node_Event_HUD;                                         // 0x0970(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_CenterX;                                     // 0x0978(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_CenterY;                                     // 0x097C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DrawScale;                                   // 0x0980(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0984(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x0988(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_FFloor_ReturnValue;                              // 0x098C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FText                                       CallFunc_Conv_IntToText_ReturnValue;                      // 0x0990(0x0028) (Transient, DuplicateTransient)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument;                     // 0x09B8(0x0050) (Transient, DuplicateTransient)
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array;                                   // 0x0A08(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Format_ReturnValue;                              // 0x0A18(0x0028) (Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_TextToString_ReturnValue;                   // 0x0A40(0x0010) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_XPFromEgg.Buff_XPFromEgg_C");
		return ptr;
	}


	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void UserConstructionScript();
	void DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void ExecuteUbergraph_Buff_XPFromEgg(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
