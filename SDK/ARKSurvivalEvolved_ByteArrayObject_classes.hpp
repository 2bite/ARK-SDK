#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ByteArrayObject_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ByteArrayObject.ByteArrayObject_C
// 0x0010 (0x0038 - 0x0028)
class UByteArrayObject_C : public UObject
{
public:
	TArray<unsigned char>                              ByteArray;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ByteArrayObject.ByteArrayObject_C");
		return ptr;
	}


	void ExecuteUbergraph_ByteArrayObject(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
