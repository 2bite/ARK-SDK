#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Leech_Character_Diseased_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Leech_Character_Diseased.Leech_Character_Diseased_C
// 0x0008 (0x2278 - 0x2270)
class ALeech_Character_Diseased_C : public ALeech_Character_C
{
public:
	class UDinoCharacterStatusComponent_BP_Leech_Diseased_C* DinoCharacterStatus_BP_Leech_Diseased_C1;                 // 0x2270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Leech_Character_Diseased.Leech_Character_Diseased_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Leech_Character_Diseased(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
