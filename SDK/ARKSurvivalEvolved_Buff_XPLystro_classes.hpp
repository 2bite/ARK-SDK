#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_XPLystro_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_XPLystro.Buff_XPLystro_C
// 0x0020 (0x0970 - 0x0950)
class ABuff_XPLystro_C : public APrimalBuff
{
public:
	int                                                K2Node_Event_BuffIndex;                                   // 0x0950(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0954(0x0004) MISSED OFFSET
	class AShooterHUD*                                 K2Node_Event_HUD;                                         // 0x0958(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_CenterX;                                     // 0x0960(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_CenterY;                                     // 0x0964(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DrawScale;                                   // 0x0968(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x096C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_XPLystro.Buff_XPLystro_C");
		return ptr;
	}


	void UserConstructionScript();
	void DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void ExecuteUbergraph_Buff_XPLystro(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
