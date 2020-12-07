// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdobeCeilingWithDoorWay_Giant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AdobeCeilingWithDoorWay_Giant.EngramEntry_AdobeCeilingWithDoorWay_Giant_C.ExecuteUbergraph_EngramEntry_AdobeCeilingWithDoorWay_Giant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AdobeCeilingWithDoorWay_Giant_C::ExecuteUbergraph_EngramEntry_AdobeCeilingWithDoorWay_Giant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AdobeCeilingWithDoorWay_Giant.EngramEntry_AdobeCeilingWithDoorWay_Giant_C.ExecuteUbergraph_EngramEntry_AdobeCeilingWithDoorWay_Giant");

	UEngramEntry_AdobeCeilingWithDoorWay_Giant_C_ExecuteUbergraph_EngramEntry_AdobeCeilingWithDoorWay_Giant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
