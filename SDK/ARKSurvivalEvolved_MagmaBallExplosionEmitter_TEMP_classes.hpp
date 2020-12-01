#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MagmaBallExplosionEmitter_TEMP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MagmaBallExplosionEmitter_TEMP.MagmaBallExplosionEmitter_TEMP_C
// 0x0000 (0x0510 - 0x0510)
class AMagmaBallExplosionEmitter_TEMP_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MagmaBallExplosionEmitter_TEMP.MagmaBallExplosionEmitter_TEMP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MagmaBallExplosionEmitter_TEMP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
