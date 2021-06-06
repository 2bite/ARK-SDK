#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dodo_Character_BP_Birthday_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dodo_Character_BP_Birthday.Dodo_Character_BP_Birthday_C
// 0x0008 (0x2278 - 0x2270)
class ADodo_Character_BP_Birthday_C : public ADodo_Character_BP_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x2270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dodo_Character_BP_Birthday.Dodo_Character_BP_Birthday_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dodo_Character_BP_Birthday(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
