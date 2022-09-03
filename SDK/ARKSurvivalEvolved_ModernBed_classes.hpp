#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ModernBed_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ModernBed.ModernBed_C
// 0x0000 (0x0F50 - 0x0F50)
class AModernBed_C : public ABedBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModernBed.ModernBed_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ModernBed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
