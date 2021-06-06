#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mosa_Character_BP_Mega_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mosa_Character_BP_Mega.Mosa_Character_BP_Mega_C
// 0x000F (0x22C8 - 0x22B9)
class AMosa_Character_BP_Mega_C : public AMosa_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x22B9(0x0007) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Mosasaur_Mega_C* DinoCharacterStatus_BP_Mosasaur_Mega_C1;                  // 0x22C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mosa_Character_BP_Mega.Mosa_Character_BP_Mega_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Mosa_Character_BP_Mega(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
