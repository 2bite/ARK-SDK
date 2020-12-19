#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Trilobite_Character_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Trilobite_Character.Trilobite_Character_C
// 0x0008 (0x2190 - 0x2188)
class ATrilobite_Character_C : public AInsect_Character_Base_C
{
public:
	class UDinoCharacterStatusComponent_BP_Trilobite_C* DinoCharacterStatus_BP_Trilobite_C1;                      // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trilobite_Character.Trilobite_Character_C");
		return ptr;
	}


	bool BP_ForceAllowAddBuff(class UClass** BuffClass);
	void UserConstructionScript();
	void ExecuteUbergraph_Trilobite_Character(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
