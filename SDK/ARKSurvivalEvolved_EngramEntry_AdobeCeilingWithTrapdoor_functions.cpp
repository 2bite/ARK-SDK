// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdobeCeilingWithTrapdoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AdobeCeilingWithTrapdoor.EngramEntry_AdobeCeilingWithTrapdoor_C.ExecuteUbergraph_EngramEntry_AdobeCeilingWithTrapdoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AdobeCeilingWithTrapdoor_C::ExecuteUbergraph_EngramEntry_AdobeCeilingWithTrapdoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AdobeCeilingWithTrapdoor.EngramEntry_AdobeCeilingWithTrapdoor_C.ExecuteUbergraph_EngramEntry_AdobeCeilingWithTrapdoor");

	UEngramEntry_AdobeCeilingWithTrapdoor_C_ExecuteUbergraph_EngramEntry_AdobeCeilingWithTrapdoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
