#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mosa_Character_BP_Cave_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mosa_Character_BP_Cave.Mosa_Character_BP_Cave_C
// 0x0008 (0x2110 - 0x2108)
class AMosa_Character_BP_Cave_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Mosasaur_C* DinoCharacterStatus_BP_Mosasaur_C1;                       // 0x2108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mosa_Character_BP_Cave.Mosa_Character_BP_Cave_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Mosa_Character_BP_Cave(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
