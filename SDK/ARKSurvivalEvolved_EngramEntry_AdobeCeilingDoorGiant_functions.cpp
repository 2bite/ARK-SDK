// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdobeCeilingDoorGiant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AdobeCeilingDoorGiant.EngramEntry_AdobeCeilingDoorGiant_C.ExecuteUbergraph_EngramEntry_AdobeCeilingDoorGiant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AdobeCeilingDoorGiant_C::ExecuteUbergraph_EngramEntry_AdobeCeilingDoorGiant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AdobeCeilingDoorGiant.EngramEntry_AdobeCeilingDoorGiant_C.ExecuteUbergraph_EngramEntry_AdobeCeilingDoorGiant");

	UEngramEntry_AdobeCeilingDoorGiant_C_ExecuteUbergraph_EngramEntry_AdobeCeilingDoorGiant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
