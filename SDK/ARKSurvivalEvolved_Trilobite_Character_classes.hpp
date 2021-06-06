#pragma once

// ARKSurvivalEvolved (329.9) SDK

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
// 0x0008 (0x2270 - 0x2268)
class ATrilobite_Character_C : public AInsect_Character_Base_C
{
public:
	class UDinoCharacterStatusComponent_BP_Trilobite_C* DinoCharacterStatus_BP_Trilobite_C1;                      // 0x2268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
