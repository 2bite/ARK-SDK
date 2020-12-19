// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalSpikeWall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalSpikeWall.EngramEntry_MetalSpikeWall_C.ExecuteUbergraph_EngramEntry_MetalSpikeWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalSpikeWall_C::ExecuteUbergraph_EngramEntry_MetalSpikeWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalSpikeWall.EngramEntry_MetalSpikeWall_C.ExecuteUbergraph_EngramEntry_MetalSpikeWall");

	UEngramEntry_MetalSpikeWall_C_ExecuteUbergraph_EngramEntry_MetalSpikeWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
