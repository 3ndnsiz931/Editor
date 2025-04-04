﻿// header.h: 표준 시스템 포함 파일
// 또는 프로젝트 특정 포함 파일이 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용을 Windows 헤더에서 제외합니다.
// Windows 헤더 파일
#include <windows.h>
// C 런타임 헤더 파일입니다.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

// 정적 라이브러리 (lib)
// 장점 :
// 시스템 환경이 변해도 어플리케이션에 아무런 영향 X.
// 컴파일 시 필요한 라이브러리를 적재하기 때문에 이식성이 좋다.
// 런타임 시 외부를 참조할 필요가 없어서 속도가 빠르다.
// 
// 단점 :
// 같은 코드를 가진 프로그램이 실행할 경우가 있다면 코드가 중복될 수 있으니
// 그만큼 메모리를 낭비함.
// 라이브러리가 변경되면 변경된 라이브러리만 재배포하면 되는 게 아니라
// 다시 컴파일해서 새로 빌드된 버전 전체를 배포해야 함.

// 동적 라이브러리 (DLL)
// 장점 :
// 메모리 절약
// 보다 쉽게 업그레이드 해서 배포 가능
// 서로 다른 프로그램에서 동일한 함수를 호출 가능
// 프로그램 변경 시 라이브러리만 재배포하면 되니까 유지보수가 쉬움.
//
// 단점 :
// 외부의존도가 높기 때문에 이식성이 낮음
// 공유 라이브러리를 메모리에 올려놓고 해당 라이브러리를 찾아서 접근해야하기 때문에
// 속도가 느림.