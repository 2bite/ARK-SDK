#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossTeleporter_Gorilla_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BossTeleporter_Gorilla_Medium.BossTeleporter_Gorilla_Medium_C
// 0x0000 (0x0A00 - 0x0A00)
class ABossTeleporter_Gorilla_Medium_C : public ABossTeleporter_Gorilla_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BossTeleporter_Gorilla_Medium.BossTeleporter_Gorilla_Medium_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BossTeleporter_Gorilla_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
