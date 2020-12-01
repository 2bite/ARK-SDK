// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ZiplineMotor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ZiplineMotor.EngramEntry_ZiplineMotor_C.ExecuteUbergraph_EngramEntry_ZiplineMotor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ZiplineMotor_C::ExecuteUbergraph_EngramEntry_ZiplineMotor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ZiplineMotor.EngramEntry_ZiplineMotor_C.ExecuteUbergraph_EngramEntry_ZiplineMotor");

	UEngramEntry_ZiplineMotor_C_ExecuteUbergraph_EngramEntry_ZiplineMotor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
