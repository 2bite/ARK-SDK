// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Handcuffs_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Handcuffs.EngramEntry_Handcuffs_C.ExecuteUbergraph_EngramEntry_Handcuffs
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Handcuffs_C::ExecuteUbergraph_EngramEntry_Handcuffs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Handcuffs.EngramEntry_Handcuffs_C.ExecuteUbergraph_EngramEntry_Handcuffs");

	UEngramEntry_Handcuffs_C_ExecuteUbergraph_EngramEntry_Handcuffs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
