#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RefreshedXP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RefreshedXP.Buff_RefreshedXP_C
// 0x0020 (0x0980 - 0x0960)
class ABuff_RefreshedXP_C : public APrimalBuff
{
public:
	int                                                K2Node_Event_BuffIndex;                                   // 0x0960(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0964(0x0004) MISSED OFFSET
	class AShooterHUD*                                 K2Node_Event_HUD;                                         // 0x0968(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_CenterX;                                     // 0x0970(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_CenterY;                                     // 0x0974(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DrawScale;                                   // 0x0978(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x097C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RefreshedXP.Buff_RefreshedXP_C");
		return ptr;
	}


	void UserConstructionScript();
	void DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void ExecuteUbergraph_Buff_RefreshedXP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
