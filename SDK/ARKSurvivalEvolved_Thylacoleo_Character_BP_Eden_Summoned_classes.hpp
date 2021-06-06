#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Thylacoleo_Character_BP_Eden_Summoned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Thylacoleo_Character_BP_Eden_Summoned.Thylacoleo_Character_BP_Eden_Summoned_C
// 0x0000 (0x2808 - 0x2808)
class AThylacoleo_Character_BP_Eden_Summoned_C : public AThylacoleo_Character_BP_Eden_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Thylacoleo_Character_BP_Eden_Summoned.Thylacoleo_Character_BP_Eden_Summoned_C");
		return ptr;
	}


	void Check_for_Ai_Attach_to_Tree();
	void UserConstructionScript();
	void ExecuteUbergraph_Thylacoleo_Character_BP_Eden_Summoned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
