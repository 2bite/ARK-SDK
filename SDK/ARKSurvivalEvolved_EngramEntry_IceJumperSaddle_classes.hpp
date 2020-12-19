#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_IceJumperSaddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_IceJumperSaddle.EngramEntry_IceJumperSaddle_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_IceJumperSaddle_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_IceJumperSaddle.EngramEntry_IceJumperSaddle_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_IceJumperSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
