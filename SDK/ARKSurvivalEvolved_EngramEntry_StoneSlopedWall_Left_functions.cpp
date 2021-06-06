// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StoneSlopedWall_Left_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StoneSlopedWall_Left.EngramEntry_StoneSlopedWall_Left_C.ExecuteUbergraph_EngramEntry_StoneSlopedWall_Left
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StoneSlopedWall_Left_C::ExecuteUbergraph_EngramEntry_StoneSlopedWall_Left(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StoneSlopedWall_Left.EngramEntry_StoneSlopedWall_Left_C.ExecuteUbergraph_EngramEntry_StoneSlopedWall_Left");

	UEngramEntry_StoneSlopedWall_Left_C_ExecuteUbergraph_EngramEntry_StoneSlopedWall_Left_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
