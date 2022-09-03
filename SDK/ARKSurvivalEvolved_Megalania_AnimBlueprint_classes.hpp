#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megalania_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Megalania_AnimBlueprint.Megalania_AnimBlueprint_C
// 0x0004 (0x2C24 - 0x2C20)
class UMegalania_AnimBlueprint_C : public UDinoBlueprintBase_Climber_C
{
public:
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x2C20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Megalania_AnimBlueprint.Megalania_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Megalania_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
