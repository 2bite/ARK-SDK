#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Euryp_Character_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Euryp_Character.Euryp_Character_C
// 0x0008 (0x2290 - 0x2288)
class AEuryp_Character_C : public AInsect_Character_Base_C
{
public:
	class UDinoCharacterStatusComponent_BP_Trilobite_C* DinoCharacterStatus_BP_Trilobite_C1;                      // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Euryp_Character.Euryp_Character_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Euryp_Character(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
