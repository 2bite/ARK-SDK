// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_GenericWater_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_GenericWater.DinoSpawnEntries_GenericWater_C.ExecuteUbergraph_DinoSpawnEntries_GenericWater
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_GenericWater_C::ExecuteUbergraph_DinoSpawnEntries_GenericWater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_GenericWater.DinoSpawnEntries_GenericWater_C.ExecuteUbergraph_DinoSpawnEntries_GenericWater");

	UDinoSpawnEntries_GenericWater_C_ExecuteUbergraph_DinoSpawnEntries_GenericWater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
