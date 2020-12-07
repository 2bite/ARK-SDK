#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSpear_Carrot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjSpear_Carrot.ProjSpear_Carrot_C
// 0x0000 (0x0688 - 0x0688)
class AProjSpear_Carrot_C : public AProjSpear_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjSpear_Carrot.ProjSpear_Carrot_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjSpear_Carrot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
