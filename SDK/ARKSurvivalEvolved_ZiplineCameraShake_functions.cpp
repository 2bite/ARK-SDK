// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ZiplineCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ZiplineCameraShake.ZiplineCameraShake_C.ExecuteUbergraph_ZiplineCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineCameraShake_C::ExecuteUbergraph_ZiplineCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineCameraShake.ZiplineCameraShake_C.ExecuteUbergraph_ZiplineCameraShake");

	UZiplineCameraShake_C_ExecuteUbergraph_ZiplineCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
