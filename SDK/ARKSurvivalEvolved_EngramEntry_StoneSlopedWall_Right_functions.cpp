// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StoneSlopedWall_Right_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StoneSlopedWall_Right.EngramEntry_StoneSlopedWall_Right_C.ExecuteUbergraph_EngramEntry_StoneSlopedWall_Right
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StoneSlopedWall_Right_C::ExecuteUbergraph_EngramEntry_StoneSlopedWall_Right(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StoneSlopedWall_Right.EngramEntry_StoneSlopedWall_Right_C.ExecuteUbergraph_EngramEntry_StoneSlopedWall_Right");

	UEngramEntry_StoneSlopedWall_Right_C_ExecuteUbergraph_EngramEntry_StoneSlopedWall_Right_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
