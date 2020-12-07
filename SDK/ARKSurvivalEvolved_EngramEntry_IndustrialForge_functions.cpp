// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_IndustrialForge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_IndustrialForge.EngramEntry_IndustrialForge_C.ExecuteUbergraph_EngramEntry_IndustrialForge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_IndustrialForge_C::ExecuteUbergraph_EngramEntry_IndustrialForge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_IndustrialForge.EngramEntry_IndustrialForge_C.ExecuteUbergraph_EngramEntry_IndustrialForge");

	UEngramEntry_IndustrialForge_C_ExecuteUbergraph_EngramEntry_IndustrialForge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
