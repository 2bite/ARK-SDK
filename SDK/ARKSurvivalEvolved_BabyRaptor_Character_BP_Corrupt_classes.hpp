#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BabyRaptor_Character_BP_Corrupt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BabyRaptor_Character_BP_Corrupt.BabyRaptor_Character_BP_Corrupt_C
// 0x0008 (0x25C0 - 0x25B8)
class ABabyRaptor_Character_BP_Corrupt_C : public ARaptor_Character_BP_Corrupt_C
{
public:
	class UDinoCharacterStatusComponent_BP_Raptor_Corrupt_Baby_C* DinoCharacterStatus_BP_Raptor_Corrupt_Baby_C1;            // 0x25B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BabyRaptor_Character_BP_Corrupt.BabyRaptor_Character_BP_Corrupt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BabyRaptor_Character_BP_Corrupt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
