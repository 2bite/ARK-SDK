#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gorilla_Character_BP_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gorilla_Character_BP_Medium.Gorilla_Character_BP_Medium_C
// 0x000E (0x2308 - 0x22FA)
class AGorilla_Character_BP_Medium_C : public AGorilla_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x22FA(0x0006) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Gorilla_Medium_C* DinoCharacterStatus_BP_Gorilla_Medium_C1;                 // 0x2300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gorilla_Character_BP_Medium.Gorilla_Character_BP_Medium_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Gorilla_Character_BP_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
