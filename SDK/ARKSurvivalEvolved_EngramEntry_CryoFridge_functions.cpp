// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_CryoFridge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_CryoFridge.EngramEntry_CryoFridge_C.ExecuteUbergraph_EngramEntry_CryoFridge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_CryoFridge_C::ExecuteUbergraph_EngramEntry_CryoFridge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_CryoFridge.EngramEntry_CryoFridge_C.ExecuteUbergraph_EngramEntry_CryoFridge");

	UEngramEntry_CryoFridge_C_ExecuteUbergraph_EngramEntry_CryoFridge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
