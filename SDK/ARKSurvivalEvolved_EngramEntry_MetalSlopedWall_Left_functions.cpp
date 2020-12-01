// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalSlopedWall_Left_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalSlopedWall_Left.EngramEntry_MetalSlopedWall_Left_C.ExecuteUbergraph_EngramEntry_MetalSlopedWall_Left
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalSlopedWall_Left_C::ExecuteUbergraph_EngramEntry_MetalSlopedWall_Left(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalSlopedWall_Left.EngramEntry_MetalSlopedWall_Left_C.ExecuteUbergraph_EngramEntry_MetalSlopedWall_Left");

	UEngramEntry_MetalSlopedWall_Left_C_ExecuteUbergraph_EngramEntry_MetalSlopedWall_Left_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
