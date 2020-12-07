// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StoneCeilingWithTrapdoorGiant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StoneCeilingWithTrapdoorGiant.EngramEntry_StoneCeilingWithTrapdoorGiant_C.ExecuteUbergraph_EngramEntry_StoneCeilingWithTrapdoorGiant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StoneCeilingWithTrapdoorGiant_C::ExecuteUbergraph_EngramEntry_StoneCeilingWithTrapdoorGiant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StoneCeilingWithTrapdoorGiant.EngramEntry_StoneCeilingWithTrapdoorGiant_C.ExecuteUbergraph_EngramEntry_StoneCeilingWithTrapdoorGiant");

	UEngramEntry_StoneCeilingWithTrapdoorGiant_C_ExecuteUbergraph_EngramEntry_StoneCeilingWithTrapdoorGiant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
