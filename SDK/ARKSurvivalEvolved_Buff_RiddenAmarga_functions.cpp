// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RiddenAmarga_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RiddenAmarga.Buff_RiddenAmarga_C.UserConstructionScript
// ()

void ABuff_RiddenAmarga_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiddenAmarga.Buff_RiddenAmarga_C.UserConstructionScript");

	ABuff_RiddenAmarga_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RiddenAmarga.Buff_RiddenAmarga_C.ExecuteUbergraph_Buff_RiddenAmarga
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RiddenAmarga_C::ExecuteUbergraph_Buff_RiddenAmarga(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiddenAmarga.Buff_RiddenAmarga_C.ExecuteUbergraph_Buff_RiddenAmarga");

	ABuff_RiddenAmarga_C_ExecuteUbergraph_Buff_RiddenAmarga_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
