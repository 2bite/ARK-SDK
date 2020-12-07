#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Jugbug_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Jugbug_AnimBlueprint.Jugbug_AnimBlueprint_C
// 0x0020 (0x13CC - 0x13AC)
class UJugbug_AnimBlueprint_C : public UDinoBlueprintBase_RootTransform_Copy_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x13AC(0x0004) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x13B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AJugbug_Character_BaseBP_C*                  K2Node_DynamicCast_AsJugbug_Character_BaseBP_C;           // 0x13B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x13C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x13C1(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x13C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x13C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Jugbug_AnimBlueprint.Jugbug_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Jugbug_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
