// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GreenhouseSlopedWall_Right_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_GreenhouseSlopedWall_Right.EngramEntry_GreenhouseSlopedWall_Right_C.ExecuteUbergraph_EngramEntry_GreenhouseSlopedWall_Right
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_GreenhouseSlopedWall_Right_C::ExecuteUbergraph_EngramEntry_GreenhouseSlopedWall_Right(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_GreenhouseSlopedWall_Right.EngramEntry_GreenhouseSlopedWall_Right_C.ExecuteUbergraph_EngramEntry_GreenhouseSlopedWall_Right");

	UEngramEntry_GreenhouseSlopedWall_Right_C_ExecuteUbergraph_EngramEntry_GreenhouseSlopedWall_Right_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
