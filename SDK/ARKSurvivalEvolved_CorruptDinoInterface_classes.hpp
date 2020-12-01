#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CorruptDinoInterface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CorruptDinoInterface.CorruptDinoInterface_C
// 0x0000 (0x0028 - 0x0028)
class UCorruptDinoInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CorruptDinoInterface.CorruptDinoInterface_C");
		return ptr;
	}


	void SetSpawnLoc(const struct FVector& Loc);
	void Teleported();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
