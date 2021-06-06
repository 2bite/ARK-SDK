// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_LoadoutMannequin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_LoadoutMannequin.EngramEntry_LoadoutMannequin_C.ExecuteUbergraph_EngramEntry_LoadoutMannequin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_LoadoutMannequin_C::ExecuteUbergraph_EngramEntry_LoadoutMannequin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_LoadoutMannequin.EngramEntry_LoadoutMannequin_C.ExecuteUbergraph_EngramEntry_LoadoutMannequin");

	UEngramEntry_LoadoutMannequin_C_ExecuteUbergraph_EngramEntry_LoadoutMannequin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
