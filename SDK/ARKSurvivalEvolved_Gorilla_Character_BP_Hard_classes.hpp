#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gorilla_Character_BP_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gorilla_Character_BP_Hard.Gorilla_Character_BP_Hard_C
// 0x000E (0x2308 - 0x22FA)
class AGorilla_Character_BP_Hard_C : public AGorilla_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x22FA(0x0006) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Gorilla_Hard_C* DinoCharacterStatus_BP_Gorilla_Hard_C1;                   // 0x2300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gorilla_Character_BP_Hard.Gorilla_Character_BP_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Gorilla_Character_BP_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
