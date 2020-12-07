// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntries_Wasteland_DesertBuffer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_Wasteland_DesertBuffer.DinoSpawnEntries_Wasteland_DesertBuffer_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_DesertBuffer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_Wasteland_DesertBuffer_C::ExecuteUbergraph_DinoSpawnEntries_Wasteland_DesertBuffer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_Wasteland_DesertBuffer.DinoSpawnEntries_Wasteland_DesertBuffer_C.ExecuteUbergraph_DinoSpawnEntries_Wasteland_DesertBuffer");

	UDinoSpawnEntries_Wasteland_DesertBuffer_C_ExecuteUbergraph_DinoSpawnEntries_Wasteland_DesertBuffer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
