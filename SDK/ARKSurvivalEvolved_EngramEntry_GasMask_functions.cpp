// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GasMask_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_GasMask.EngramEntry_GasMask_C.ExecuteUbergraph_EngramEntry_GasMask
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_GasMask_C::ExecuteUbergraph_EngramEntry_GasMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_GasMask.EngramEntry_GasMask_C.ExecuteUbergraph_EngramEntry_GasMask");

	UEngramEntry_GasMask_C_ExecuteUbergraph_EngramEntry_GasMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
