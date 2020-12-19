// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_CompoundArrow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_CompoundArrow.EngramEntry_CompoundArrow_C.ExecuteUbergraph_EngramEntry_CompoundArrow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_CompoundArrow_C::ExecuteUbergraph_EngramEntry_CompoundArrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_CompoundArrow.EngramEntry_CompoundArrow_C.ExecuteUbergraph_EngramEntry_CompoundArrow");

	UEngramEntry_CompoundArrow_C_ExecuteUbergraph_EngramEntry_CompoundArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
