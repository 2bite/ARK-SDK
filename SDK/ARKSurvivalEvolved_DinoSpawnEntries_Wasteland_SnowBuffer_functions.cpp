// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_Wasteland_SnowBuffer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_Wasteland_SnowBuffer.DinoSpawnEntries_Wasteland_SnowBuffer_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_SnowBuffer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_Wasteland_SnowBuffer_C::ExecuteUbergraph_DinoSpawnEntries_Wasteland_SnowBuffer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_Wasteland_SnowBuffer.DinoSpawnEntries_Wasteland_SnowBuffer_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_SnowBuffer");

	UDinoSpawnEntries_Wasteland_SnowBuffer_C_ExecuteUbergraph_DinoSpawnEntries_Wasteland_SnowBuffer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
