#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGiantRock_Med_Boss_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjGiantRock_Med_Boss.ProjGiantRock_Med_Boss_C
// 0x0000 (0x0688 - 0x0688)
class AProjGiantRock_Med_Boss_C : public AProjGiantRock_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjGiantRock_Med_Boss.ProjGiantRock_Med_Boss_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjGiantRock_Med_Boss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
