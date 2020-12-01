// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_Wasteland_City_Buffer_2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_Wasteland_City_Buffer_2.DinoSpawnEntries_Wasteland_City_Buffer_1_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_City_Buffer_2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_Wasteland_City_Buffer_1_C::ExecuteUbergraph_DinoSpawnEntries_Wasteland_City_Buffer_2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_Wasteland_City_Buffer_2.DinoSpawnEntries_Wasteland_City_Buffer_1_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_City_Buffer_2");

	UDinoSpawnEntries_Wasteland_City_Buffer_1_C_ExecuteUbergraph_DinoSpawnEntries_Wasteland_City_Buffer_2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
