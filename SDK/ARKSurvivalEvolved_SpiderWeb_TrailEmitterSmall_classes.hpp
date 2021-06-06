#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpiderWeb_TrailEmitterSmall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpiderWeb_TrailEmitterSmall.SpiderWeb_TrailEmitterSmall_C
// 0x0000 (0x0518 - 0x0518)
class ASpiderWeb_TrailEmitterSmall_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpiderWeb_TrailEmitterSmall.SpiderWeb_TrailEmitterSmall_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SpiderWeb_TrailEmitterSmall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
