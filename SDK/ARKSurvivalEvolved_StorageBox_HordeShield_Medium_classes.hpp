#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_HordeShield_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StorageBox_HordeShield_Medium.StorageBox_HordeShield_Medium_C
// 0x0000 (0x1090 - 0x1090)
class AStorageBox_HordeShield_Medium_C : public AStorageBox_HordeShield_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StorageBox_HordeShield_Medium.StorageBox_HordeShield_Medium_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StorageBox_HordeShield_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
